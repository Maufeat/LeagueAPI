#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolGameflowQueueGameTypeConfig { 
    bool teamChampionPool;
    bool reroll;
    bool exclusivePick;
    bool deathMatch;
    std::string name;
    bool learningQuests;
    std::string banMode;
    std::string pickMode;
    int32_t mainPickTimerDuration;
    int32_t maxAllowableBans;
    int32_t postPickTimerDuration;
    bool allowTrades;
    bool advancedLearningQuests;
    int64_t id;
    bool duplicatePick;
    int32_t banTimerDuration;
    bool onboardCoopBeginner;
    bool doNotRemove;
    bool crossTeamChampionPool;
    bool battleBoost; 
  };
  inline void to_json(json& j, const LolGameflowQueueGameTypeConfig& v) {
    j["teamChampionPool"] = v.teamChampionPool; 
    j["reroll"] = v.reroll; 
    j["exclusivePick"] = v.exclusivePick; 
    j["deathMatch"] = v.deathMatch; 
    j["name"] = v.name; 
    j["learningQuests"] = v.learningQuests; 
    j["banMode"] = v.banMode; 
    j["pickMode"] = v.pickMode; 
    j["mainPickTimerDuration"] = v.mainPickTimerDuration; 
    j["maxAllowableBans"] = v.maxAllowableBans; 
    j["postPickTimerDuration"] = v.postPickTimerDuration; 
    j["allowTrades"] = v.allowTrades; 
    j["advancedLearningQuests"] = v.advancedLearningQuests; 
    j["id"] = v.id; 
    j["duplicatePick"] = v.duplicatePick; 
    j["banTimerDuration"] = v.banTimerDuration; 
    j["onboardCoopBeginner"] = v.onboardCoopBeginner; 
    j["doNotRemove"] = v.doNotRemove; 
    j["crossTeamChampionPool"] = v.crossTeamChampionPool; 
    j["battleBoost"] = v.battleBoost; 
  }
  inline void from_json(const json& j, LolGameflowQueueGameTypeConfig& v) {
    v.teamChampionPool = j.at("teamChampionPool").get<bool>(); 
    v.reroll = j.at("reroll").get<bool>(); 
    v.exclusivePick = j.at("exclusivePick").get<bool>(); 
    v.deathMatch = j.at("deathMatch").get<bool>(); 
    v.name = j.at("name").get<std::string>(); 
    v.learningQuests = j.at("learningQuests").get<bool>(); 
    v.banMode = j.at("banMode").get<std::string>(); 
    v.pickMode = j.at("pickMode").get<std::string>(); 
    v.mainPickTimerDuration = j.at("mainPickTimerDuration").get<int32_t>(); 
    v.maxAllowableBans = j.at("maxAllowableBans").get<int32_t>(); 
    v.postPickTimerDuration = j.at("postPickTimerDuration").get<int32_t>(); 
    v.allowTrades = j.at("allowTrades").get<bool>(); 
    v.advancedLearningQuests = j.at("advancedLearningQuests").get<bool>(); 
    v.id = j.at("id").get<int64_t>(); 
    v.duplicatePick = j.at("duplicatePick").get<bool>(); 
    v.banTimerDuration = j.at("banTimerDuration").get<int32_t>(); 
    v.onboardCoopBeginner = j.at("onboardCoopBeginner").get<bool>(); 
    v.doNotRemove = j.at("doNotRemove").get<bool>(); 
    v.crossTeamChampionPool = j.at("crossTeamChampionPool").get<bool>(); 
    v.battleBoost = j.at("battleBoost").get<bool>(); 
  }
}