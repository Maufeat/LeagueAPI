#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolGameflowQueueGameTypeConfig { 
    bool teamChampionPool;
    bool reroll;
    bool learningQuests;
    int32_t maxAllowableBans;
    bool duplicatePick;
    std::string name;
    bool battleBoost;
    int32_t mainPickTimerDuration;
    int64_t id;
    bool deathMatch;
    std::string pickMode;
    bool onboardCoopBeginner;
    int32_t postPickTimerDuration;
    bool doNotRemove;
    bool advancedLearningQuests;
    std::string banMode;
    bool exclusivePick;
    bool allowTrades;
    bool crossTeamChampionPool;
    int32_t banTimerDuration; 
  };
  inline void to_json(json& j, const LolGameflowQueueGameTypeConfig& v) {
    j["teamChampionPool"] = v.teamChampionPool; 
    j["reroll"] = v.reroll; 
    j["learningQuests"] = v.learningQuests; 
    j["maxAllowableBans"] = v.maxAllowableBans; 
    j["duplicatePick"] = v.duplicatePick; 
    j["name"] = v.name; 
    j["battleBoost"] = v.battleBoost; 
    j["mainPickTimerDuration"] = v.mainPickTimerDuration; 
    j["id"] = v.id; 
    j["deathMatch"] = v.deathMatch; 
    j["pickMode"] = v.pickMode; 
    j["onboardCoopBeginner"] = v.onboardCoopBeginner; 
    j["postPickTimerDuration"] = v.postPickTimerDuration; 
    j["doNotRemove"] = v.doNotRemove; 
    j["advancedLearningQuests"] = v.advancedLearningQuests; 
    j["banMode"] = v.banMode; 
    j["exclusivePick"] = v.exclusivePick; 
    j["allowTrades"] = v.allowTrades; 
    j["crossTeamChampionPool"] = v.crossTeamChampionPool; 
    j["banTimerDuration"] = v.banTimerDuration; 
  }
  inline void from_json(const json& j, LolGameflowQueueGameTypeConfig& v) {
    v.teamChampionPool = j.at("teamChampionPool").get<bool>(); 
    v.reroll = j.at("reroll").get<bool>(); 
    v.learningQuests = j.at("learningQuests").get<bool>(); 
    v.maxAllowableBans = j.at("maxAllowableBans").get<int32_t>(); 
    v.duplicatePick = j.at("duplicatePick").get<bool>(); 
    v.name = j.at("name").get<std::string>(); 
    v.battleBoost = j.at("battleBoost").get<bool>(); 
    v.mainPickTimerDuration = j.at("mainPickTimerDuration").get<int32_t>(); 
    v.id = j.at("id").get<int64_t>(); 
    v.deathMatch = j.at("deathMatch").get<bool>(); 
    v.pickMode = j.at("pickMode").get<std::string>(); 
    v.onboardCoopBeginner = j.at("onboardCoopBeginner").get<bool>(); 
    v.postPickTimerDuration = j.at("postPickTimerDuration").get<int32_t>(); 
    v.doNotRemove = j.at("doNotRemove").get<bool>(); 
    v.advancedLearningQuests = j.at("advancedLearningQuests").get<bool>(); 
    v.banMode = j.at("banMode").get<std::string>(); 
    v.exclusivePick = j.at("exclusivePick").get<bool>(); 
    v.allowTrades = j.at("allowTrades").get<bool>(); 
    v.crossTeamChampionPool = j.at("crossTeamChampionPool").get<bool>(); 
    v.banTimerDuration = j.at("banTimerDuration").get<int32_t>(); 
  }
}