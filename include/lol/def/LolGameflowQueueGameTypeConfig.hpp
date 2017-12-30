#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolGameflowQueueGameTypeConfig { 
    std::string name;
    int64_t id;
    int32_t maxAllowableBans;
    bool deathMatch;
    bool advancedLearningQuests;
    bool battleBoost;
    std::string pickMode;
    bool crossTeamChampionPool;
    bool duplicatePick;
    bool doNotRemove;
    int32_t postPickTimerDuration;
    bool exclusivePick;
    bool reroll;
    bool teamChampionPool;
    bool onboardCoopBeginner;
    int32_t banTimerDuration;
    std::string banMode;
    bool learningQuests;
    bool allowTrades;
    int32_t mainPickTimerDuration; 
  };
  inline void to_json(json& j, const LolGameflowQueueGameTypeConfig& v) {
    j["name"] = v.name; 
    j["id"] = v.id; 
    j["maxAllowableBans"] = v.maxAllowableBans; 
    j["deathMatch"] = v.deathMatch; 
    j["advancedLearningQuests"] = v.advancedLearningQuests; 
    j["battleBoost"] = v.battleBoost; 
    j["pickMode"] = v.pickMode; 
    j["crossTeamChampionPool"] = v.crossTeamChampionPool; 
    j["duplicatePick"] = v.duplicatePick; 
    j["doNotRemove"] = v.doNotRemove; 
    j["postPickTimerDuration"] = v.postPickTimerDuration; 
    j["exclusivePick"] = v.exclusivePick; 
    j["reroll"] = v.reroll; 
    j["teamChampionPool"] = v.teamChampionPool; 
    j["onboardCoopBeginner"] = v.onboardCoopBeginner; 
    j["banTimerDuration"] = v.banTimerDuration; 
    j["banMode"] = v.banMode; 
    j["learningQuests"] = v.learningQuests; 
    j["allowTrades"] = v.allowTrades; 
    j["mainPickTimerDuration"] = v.mainPickTimerDuration; 
  }
  inline void from_json(const json& j, LolGameflowQueueGameTypeConfig& v) {
    v.name = j.at("name").get<std::string>(); 
    v.id = j.at("id").get<int64_t>(); 
    v.maxAllowableBans = j.at("maxAllowableBans").get<int32_t>(); 
    v.deathMatch = j.at("deathMatch").get<bool>(); 
    v.advancedLearningQuests = j.at("advancedLearningQuests").get<bool>(); 
    v.battleBoost = j.at("battleBoost").get<bool>(); 
    v.pickMode = j.at("pickMode").get<std::string>(); 
    v.crossTeamChampionPool = j.at("crossTeamChampionPool").get<bool>(); 
    v.duplicatePick = j.at("duplicatePick").get<bool>(); 
    v.doNotRemove = j.at("doNotRemove").get<bool>(); 
    v.postPickTimerDuration = j.at("postPickTimerDuration").get<int32_t>(); 
    v.exclusivePick = j.at("exclusivePick").get<bool>(); 
    v.reroll = j.at("reroll").get<bool>(); 
    v.teamChampionPool = j.at("teamChampionPool").get<bool>(); 
    v.onboardCoopBeginner = j.at("onboardCoopBeginner").get<bool>(); 
    v.banTimerDuration = j.at("banTimerDuration").get<int32_t>(); 
    v.banMode = j.at("banMode").get<std::string>(); 
    v.learningQuests = j.at("learningQuests").get<bool>(); 
    v.allowTrades = j.at("allowTrades").get<bool>(); 
    v.mainPickTimerDuration = j.at("mainPickTimerDuration").get<int32_t>(); 
  }
}