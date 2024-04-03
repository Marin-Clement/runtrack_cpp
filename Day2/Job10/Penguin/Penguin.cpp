//
// Created by Clément on 03/04/2024.
//

#include "Penguin.hpp"

std::list<std::string> Penguin::meetingPlaces;
std::vector<std::weak_ptr<Penguin>> Penguin::allPenguins;

void Penguin::addCompetitionTime(double time) {
    competitionTimes.insert(time);
}

void Penguin::displayCompetitionTimes() const {
    for (const auto& time : competitionTimes) {
        std::cout << "Time: " << time << "\n";
    }
}

void Penguin::addJournalEntry(const std::string& date, const std::string& description) {
    journal[date] = description;
}

void Penguin::modifyJournalEntry(const std::string& date, const std::string& newDescription) {
    if (journal.find(date) != journal.end()) {
        journal[date] = newDescription;
    } else {
        std::cout << "Journal entry not found.\n";
    }
}

void Penguin::removeJournalEntry(const std::string& date) {
    journal.erase(date);
}

void Penguin::addFriend(const std::shared_ptr<Penguin>& friendPenguin) {
    friends.insert(friendPenguin);
}

void Penguin::removeFriend(const std::shared_ptr<Penguin>& friendPenguin) {
    friends.erase(friendPenguin);
}

void Penguin::addSkill(const std::string& skill, int level) {
    skills[skill] = level;
}

void Penguin::modifySkill(const std::string& skill, int level) {
    if (skills.find(skill) != skills.end()) {
        skills[skill] = level;
    } else {
        std::cout << "Skill not found.\n";
    }
}

void Penguin::removeSkill(const std::string& skill) {
    skills.erase(skill);
}

void Penguin::listSkills() const {
    for (const auto& skill : skills) {
        std::cout << "Skill: " << skill.first << ", Level: " << skill.second << "\n";
    }
}

void Penguin::addMeetingPlace(const std::string &place) {
    meetingPlaces.push_back(place);
}

void Penguin::removeMeetingPlace(const std::string &place) {
    meetingPlaces.remove(place);
}

double Penguin::timeToCompleteTrack() const {
    double slideTime = 15.0 / _slideSpeed;
    double walkTime = (20 + 15.0) / _walkSpeed;
    double swimTime = 50 / _swimSpeed;
    return slideTime + walkTime + swimTime;
}

void Penguin::displayTrackTimes() {
    // Sort allPenguins by track completion time
    std::sort(allPenguins.begin(), allPenguins.end(),
              [](const std::weak_ptr<Penguin> &a, const std::weak_ptr<Penguin> &b) {
                  auto penguinA = a.lock();
                  auto penguinB = b.lock();
                  if (penguinA && penguinB) {
                      return penguinA->timeToCompleteTrack() < penguinB->timeToCompleteTrack();
                  }
                  return false;
              });

    // Display track times
    for (const auto &weakPenguin: allPenguins) {
        if (auto penguin = weakPenguin.lock()) {
            std::cout << penguin->_name << " completes the track in " << penguin->timeToCompleteTrack()
                      << " seconds.\n";
        }
    }
}

Penguin::Penguin(std::string name, double swimSpeed, double walkSpeed, double slideSpeed)
        : Aquatic(swimSpeed), Terrestrial(walkSpeed), _name(std::move(name)), _slideSpeed(slideSpeed) {}

Penguin::Penguin(const Penguin &other)
        : Aquatic(other._swimSpeed), Terrestrial(other._walkSpeed), _name(other._name),
          _slideSpeed(other._slideSpeed) {}

Penguin::~Penguin() {
    cleanUp();
}

void Penguin::swim() {
    std::cout << "Penguin " << _name << " is swimming at speed: " << _swimSpeed << " m/s\n";
}

void Penguin::walk() {
    std::cout << "Penguin " << _name << " is walking at speed: " << _walkSpeed << " m/s\n";
}

void Penguin::introduce() const {
    std::cout << "Hello, my name is " << _name << ".\n";
}

void Penguin::setSwimSpeed(double speed) {
    _swimSpeed = speed;
}

void Penguin::setWalkSpeed(double speed) {
    _walkSpeed = speed;
}

void Penguin::setSlideSpeed(double speed) {
    _slideSpeed = speed;
}

void Penguin::cleanUp() {
    allPenguins.erase(std::remove_if(allPenguins.begin(), allPenguins.end(),
                                     [](const std::weak_ptr<Penguin> &penguin) { return penguin.expired(); }),
                      allPenguins.end());
}

int main() {
    auto penguin1 = std::make_shared<Penguin>("Penguin1", 2.0, 1.0, 0.5);
    auto penguin2 = std::make_shared<Penguin>("Penguin2", 1.5, 1.5, 0.75);
    auto penguin3 = std::make_shared<Penguin>("Penguin3", 2.5, 0.75, 0.25);

    Penguin::allPenguins.push_back(penguin1);
    Penguin::allPenguins.push_back(penguin2);
    Penguin::allPenguins.push_back(penguin3);

    penguin1->addCompetitionTime(10.0);
    penguin1->addCompetitionTime(12.0);
    penguin1->addCompetitionTime(11.0);
    penguin1->displayCompetitionTimes();

    return 0;
}