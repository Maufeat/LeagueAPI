#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolGameQueuesQueueGameTypeConfig { /**/ 
    int32_t banTimerDuration;/**/
    bool duplicatePick;/**/
    std::string pickMode;/**/
    bool battleBoost;/**/
    int64_t id;/**/
    bool advancedLearningQuests;/**/
    std::string name;/**/
    int32_t mainPickTimerDuration;/**/
    bool onboardCoopBeginner;/**/
    int32_t maxAllowableBans;/**/
    bool allowTrades;/**/
    int32_t postPickTimerDuration;/**/
    bool learningQuests;/**/
    bool crossTeamChampionPool;/**/
    bool deathMatch;/**/
    bool teamChampionPool;/**/
    bool doNotRemove;/**/
    std::optional<int32_t> numPlayersPerTeamOverride;/**/
    std::string banMode;/**/
    bool reroll;/**/
    std::optional<std::string> gameModeOverride;/**/
    bool exclusivePick;/**/
  };
  static void to_json(json& j, const LolGameQueuesQueueGameTypeConfig& v) { 
    j["banTimerDuration"] = v.banTimerDuration;
    j["duplicatePick"] = v.duplicatePick;
    j["pickMode"] = v.pickMode;
    j["battleBoost"] = v.battleBoost;
    j["id"] = v.id;
    j["advancedLearningQuests"] = v.advancedLearningQuests;
    j["name"] = v.name;
    j["mainPickTimerDuration"] = v.mainPickTimerDuration;
    j["onboardCoopBeginner"] = v.onboardCoopBeginner;
    j["maxAllowableBans"] = v.maxAllowableBans;
    j["allowTrades"] = v.allowTrades;
    j["postPickTimerDuration"] = v.postPickTimerDuration;
    j["learningQuests"] = v.learningQuests;
    j["crossTeamChampionPool"] = v.crossTeamChampionPool;
    j["deathMatch"] = v.deathMatch;
    j["teamChampionPool"] = v.teamChampionPool;
    j["doNotRemove"] = v.doNotRemove;
    j["numPlayersPerTeamOverride"] = v.numPlayersPerTeamOverride;
    j["banMode"] = v.banMode;
    j["reroll"] = v.reroll;
    j["gameModeOverride"] = v.gameModeOverride;
    j["exclusivePick"] = v.exclusivePick;
  }
  static void from_json(const json& j, LolGameQueuesQueueGameTypeConfig& v) { 
    v.banTimerDuration = j.at("banTimerDuration").get<int32_t>(); 
    v.duplicatePick = j.at("duplicatePick").get<bool>(); 
    v.pickMode = j.at("pickMode").get<std::string>(); 
    v.battleBoost = j.at("battleBoost").get<bool>(); 
    v.id = j.at("id").get<int64_t>(); 
    v.advancedLearningQuests = j.at("advancedLearningQuests").get<bool>(); 
    v.name = j.at("name").get<std::string>(); 
    v.mainPickTimerDuration = j.at("mainPickTimerDuration").get<int32_t>(); 
    v.onboardCoopBeginner = j.at("onboardCoopBeginner").get<bool>(); 
    v.maxAllowableBans = j.at("maxAllowableBans").get<int32_t>(); 
    v.allowTrades = j.at("allowTrades").get<bool>(); 
    v.postPickTimerDuration = j.at("postPickTimerDuration").get<int32_t>(); 
    v.learningQuests = j.at("learningQuests").get<bool>(); 
    v.crossTeamChampionPool = j.at("crossTeamChampionPool").get<bool>(); 
    v.deathMatch = j.at("deathMatch").get<bool>(); 
    v.teamChampionPool = j.at("teamChampionPool").get<bool>(); 
    v.doNotRemove = j.at("doNotRemove").get<bool>(); 
    v.numPlayersPerTeamOverride = j.at("numPlayersPerTeamOverride").get<std::optional<int32_t>>(); 
    v.banMode = j.at("banMode").get<std::string>(); 
    v.reroll = j.at("reroll").get<bool>(); 
    v.gameModeOverride = j.at("gameModeOverride").get<std::optional<std::string>>(); 
    v.exclusivePick = j.at("exclusivePick").get<bool>(); 
  }
} 