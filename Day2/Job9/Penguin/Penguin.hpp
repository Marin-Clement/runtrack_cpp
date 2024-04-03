//
// Created by Clément on 03/04/2024.
//

#ifndef RUNTRACK_CPP_PENGUIN_HPP
#define RUNTRACK_CPP_PENGUIN_HPP

#include "../Aquatic/Aquatic.hpp"
#include "../Terrestrial/Terrestrial.hpp"

#include <memory>
#include <vector>
#include <string>
#include <list>
#include <set>
#include <map>
#include <unordered_map>
#include <utility>
#include <iostream>
#include <algorithm>

class Penguin : public Aquatic, public Terrestrial {
private:
    std::string _name;
    double _slideSpeed;
    std::shared_ptr<Penguin> self;

    static void cleanUp();

public:
    std::unordered_map<std::string, std::string> journal;

    void addJournalEntry(const std::string &date, const std::string &description);

    void modifyJournalEntry(const std::string &date, const std::string &newDescription);

    void removeJournalEntry(const std::string &date);

    std::set<std::weak_ptr<Penguin>, std::owner_less<std::weak_ptr<Penguin>>> friends;

    void addFriend(const std::shared_ptr<Penguin> &friendPenguin);

    void removeFriend(const std::shared_ptr<Penguin> &friendPenguin);

    std::map<std::string, int> skills;

    void addSkill(const std::string &skill, int level);

    void modifySkill(const std::string &skill, int level);

    void removeSkill(const std::string &skill);

    void listSkills() const;

    static std::list<std::string> meetingPlaces;

    static void addMeetingPlace(const std::string &place);

    static void removeMeetingPlace(const std::string &place);

    static std::vector<std::weak_ptr<Penguin>> allPenguins;

    Penguin(std::string name, double swimSpeed, double walkSpeed, double slideSpeed);

    Penguin(const Penguin &other); // Copy constructor
    ~Penguin();

    void swim() override;

    void walk() override;

    void introduce() const;

    void setSwimSpeed(double speed);

    void setWalkSpeed(double speed);

    void setSlideSpeed(double speed);

    double timeToCompleteTrack() const;

    static void displayTrackTimes();
};


#endif //RUNTRACK_CPP_PENGUIN_HPP
