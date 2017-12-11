#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolGameflowQueueGameTypeConfig { /**/ 
    int32_t banTimerDuration;/**/
    bool duplicatePick;/**/
    std::string pickMode;/**/
    bool deathMatch;/**/
    bool advancedLearningQuests;/**/
    std::string name;/**/
    bool learningQuests;/**/
    int32_t mainPickTimerDuration;/**/
    bool onboardCoopBeginner;/**/
    bool doNotRemove;/**/
    int32_t maxAllowableBans;/**/
    int64_t id;/**/
    bool reroll;/**/
    std::string banMode;/**/
    bool crossTeamChampionPool;/**/
    bool allowTrades;/**/
    int32_t postPickTimerDuration;/**/
    bool teamChampionPool;/**/
    bool exclusivePick;/**/
    bool battleBoost;/**/
  };
  static void to_json(json& j, const LolGameflowQueueGameTypeConfig& v) { 
    j["banTimerDuration"] = v.banTimerDuration;
    j["duplicatePick"] = v.duplicatePick;
    j["pickMode"] = v.pickMode;
    j["deathMatch"] = v.deathMatch;
    j["advancedLearningQuests"] = v.advancedLearningQuests;
    j["name"] = v.name;
    j["learningQuests"] = v.learningQuests;
    j["mainPickTimerDuration"] = v.mainPickTimerDuration;
    j["onboardCoopBeginner"] = v.onboardCoopBeginner;
    j["doNotRemove"] = v.doNotRemove;
    j["maxAllowableBans"] = v.maxAllowableBans;
    j["id"] = v.id;
    j["reroll"] = v.reroll;
    j["banMode"] = v.banMode;
    j["crossTeamChampionPool"] = v.crossTeamChampionPool;
    j["allowTrades"] = v.allowTrades;
    j["postPickTimerDuration"] = v.postPickTimerDuration;
    j["teamChampionPool"] = v.teamChampionPool;
    j["exclusivePick"] = v.exclusivePick;
    j["battleBoost"] = v.battleBoost;
  }
  static void from_json(const json& j, LolGameflowQueueGameTypeConfig& v) { 
    v.banTimerDuration = j.at("banTimerDuration").get<int32_t>(); 
    v.duplicatePick = j.at("duplicatePick").get<bool>(); 
    v.pickMode = j.at("pickMode").get<std::string>(); 
    v.deathMatch = j.at("deathMatch").get<bool>(); 
    v.advancedLearningQuests = j.at("advancedLearningQuests").get<bool>(); 
    v.name = j.at("name").get<std::string>(); 
    v.learningQuests = j.at("learningQuests").get<bool>(); 
    v.mainPickTimerDuration = j.at("mainPickTimerDuration").get<int32_t>(); 
    v.onboardCoopBeginner = j.at("onboardCoopBeginner").get<bool>(); 
    v.doNotRemove = j.at("doNotRemove").get<bool>(); 
    v.maxAllowableBans = j.at("maxAllowableBans").get<int32_t>(); 
    v.id = j.at("id").get<int64_t>(); 
    v.reroll = j.at("reroll").get<bool>(); 
    v.banMode = j.at("banMode").get<std::string>(); 
    v.crossTeamChampionPool = j.at("crossTeamChampionPool").get<bool>(); 
    v.allowTrades = j.at("allowTrades").get<bool>(); 
    v.postPickTimerDuration = j.at("postPickTimerDuration").get<int32_t>(); 
    v.teamChampionPool = j.at("teamChampionPool").get<bool>(); 
    v.exclusivePick = j.at("exclusivePick").get<bool>(); 
    v.battleBoost = j.at("battleBoost").get<bool>(); 
  }
} 