#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolGameflowQueueGameTypeConfig { 
    int64_t id;
    std::string name;
    int32_t maxAllowableBans;
    bool allowTrades;
    bool exclusivePick;
    bool duplicatePick;
    bool teamChampionPool;
    bool crossTeamChampionPool;
    bool advancedLearningQuests;
    bool battleBoost;
    bool deathMatch;
    bool doNotRemove;
    bool learningQuests;
    bool onboardCoopBeginner;
    bool reroll;
    int32_t mainPickTimerDuration;
    int32_t postPickTimerDuration;
    int32_t banTimerDuration;
    std::string pickMode;
    std::string banMode; 
  };
  inline void to_json(json& j, const LolGameflowQueueGameTypeConfig& v) {
    j["id"] = v.id; 
    j["name"] = v.name; 
    j["maxAllowableBans"] = v.maxAllowableBans; 
    j["allowTrades"] = v.allowTrades; 
    j["exclusivePick"] = v.exclusivePick; 
    j["duplicatePick"] = v.duplicatePick; 
    j["teamChampionPool"] = v.teamChampionPool; 
    j["crossTeamChampionPool"] = v.crossTeamChampionPool; 
    j["advancedLearningQuests"] = v.advancedLearningQuests; 
    j["battleBoost"] = v.battleBoost; 
    j["deathMatch"] = v.deathMatch; 
    j["doNotRemove"] = v.doNotRemove; 
    j["learningQuests"] = v.learningQuests; 
    j["onboardCoopBeginner"] = v.onboardCoopBeginner; 
    j["reroll"] = v.reroll; 
    j["mainPickTimerDuration"] = v.mainPickTimerDuration; 
    j["postPickTimerDuration"] = v.postPickTimerDuration; 
    j["banTimerDuration"] = v.banTimerDuration; 
    j["pickMode"] = v.pickMode; 
    j["banMode"] = v.banMode; 
  }
  inline void from_json(const json& j, LolGameflowQueueGameTypeConfig& v) {
    v.id = j.at("id").get<int64_t>(); 
    v.name = j.at("name").get<std::string>(); 
    v.maxAllowableBans = j.at("maxAllowableBans").get<int32_t>(); 
    v.allowTrades = j.at("allowTrades").get<bool>(); 
    v.exclusivePick = j.at("exclusivePick").get<bool>(); 
    v.duplicatePick = j.at("duplicatePick").get<bool>(); 
    v.teamChampionPool = j.at("teamChampionPool").get<bool>(); 
    v.crossTeamChampionPool = j.at("crossTeamChampionPool").get<bool>(); 
    v.advancedLearningQuests = j.at("advancedLearningQuests").get<bool>(); 
    v.battleBoost = j.at("battleBoost").get<bool>(); 
    v.deathMatch = j.at("deathMatch").get<bool>(); 
    v.doNotRemove = j.at("doNotRemove").get<bool>(); 
    v.learningQuests = j.at("learningQuests").get<bool>(); 
    v.onboardCoopBeginner = j.at("onboardCoopBeginner").get<bool>(); 
    v.reroll = j.at("reroll").get<bool>(); 
    v.mainPickTimerDuration = j.at("mainPickTimerDuration").get<int32_t>(); 
    v.postPickTimerDuration = j.at("postPickTimerDuration").get<int32_t>(); 
    v.banTimerDuration = j.at("banTimerDuration").get<int32_t>(); 
    v.pickMode = j.at("pickMode").get<std::string>(); 
    v.banMode = j.at("banMode").get<std::string>(); 
  }
}