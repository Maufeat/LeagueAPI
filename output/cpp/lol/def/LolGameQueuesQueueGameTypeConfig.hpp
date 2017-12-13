#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolGameQueuesQueueGameTypeConfig { 
    bool learningQuests;
    int32_t mainPickTimerDuration;
    std::optional<int32_t> numPlayersPerTeamOverride;
    int64_t id;
    bool onboardCoopBeginner;
    bool doNotRemove;
    bool advancedLearningQuests;
    bool deathMatch;
    int32_t banTimerDuration;
    bool teamChampionPool;
    bool reroll;
    int32_t postPickTimerDuration;
    int32_t maxAllowableBans;
    bool duplicatePick;
    std::string name;
    bool battleBoost;
    std::optional<std::string> gameModeOverride;
    std::string pickMode;
    std::string banMode;
    bool exclusivePick;
    bool allowTrades;
    bool crossTeamChampionPool; 
  };
  void to_json(json& j, const LolGameQueuesQueueGameTypeConfig& v) {
    j["learningQuests"] = v.learningQuests; 
    j["mainPickTimerDuration"] = v.mainPickTimerDuration; 
    if(v.numPlayersPerTeamOverride)
      j["numPlayersPerTeamOverride"] = *v.numPlayersPerTeamOverride;
    j["id"] = v.id; 
    j["onboardCoopBeginner"] = v.onboardCoopBeginner; 
    j["doNotRemove"] = v.doNotRemove; 
    j["advancedLearningQuests"] = v.advancedLearningQuests; 
    j["deathMatch"] = v.deathMatch; 
    j["banTimerDuration"] = v.banTimerDuration; 
    j["teamChampionPool"] = v.teamChampionPool; 
    j["reroll"] = v.reroll; 
    j["postPickTimerDuration"] = v.postPickTimerDuration; 
    j["maxAllowableBans"] = v.maxAllowableBans; 
    j["duplicatePick"] = v.duplicatePick; 
    j["name"] = v.name; 
    j["battleBoost"] = v.battleBoost; 
    if(v.gameModeOverride)
      j["gameModeOverride"] = *v.gameModeOverride;
    j["pickMode"] = v.pickMode; 
    j["banMode"] = v.banMode; 
    j["exclusivePick"] = v.exclusivePick; 
    j["allowTrades"] = v.allowTrades; 
    j["crossTeamChampionPool"] = v.crossTeamChampionPool; 
  }
  void from_json(const json& j, LolGameQueuesQueueGameTypeConfig& v) {
    v.learningQuests = j.at("learningQuests").get<bool>(); 
    v.mainPickTimerDuration = j.at("mainPickTimerDuration").get<int32_t>(); 
    if(auto it = j.find("numPlayersPerTeamOverride"); it != j.end() && !it->is_null())
      v.numPlayersPerTeamOverride = it->get<std::optional<int32_t>>(); 
    v.id = j.at("id").get<int64_t>(); 
    v.onboardCoopBeginner = j.at("onboardCoopBeginner").get<bool>(); 
    v.doNotRemove = j.at("doNotRemove").get<bool>(); 
    v.advancedLearningQuests = j.at("advancedLearningQuests").get<bool>(); 
    v.deathMatch = j.at("deathMatch").get<bool>(); 
    v.banTimerDuration = j.at("banTimerDuration").get<int32_t>(); 
    v.teamChampionPool = j.at("teamChampionPool").get<bool>(); 
    v.reroll = j.at("reroll").get<bool>(); 
    v.postPickTimerDuration = j.at("postPickTimerDuration").get<int32_t>(); 
    v.maxAllowableBans = j.at("maxAllowableBans").get<int32_t>(); 
    v.duplicatePick = j.at("duplicatePick").get<bool>(); 
    v.name = j.at("name").get<std::string>(); 
    v.battleBoost = j.at("battleBoost").get<bool>(); 
    if(auto it = j.find("gameModeOverride"); it != j.end() && !it->is_null())
      v.gameModeOverride = it->get<std::optional<std::string>>(); 
    v.pickMode = j.at("pickMode").get<std::string>(); 
    v.banMode = j.at("banMode").get<std::string>(); 
    v.exclusivePick = j.at("exclusivePick").get<bool>(); 
    v.allowTrades = j.at("allowTrades").get<bool>(); 
    v.crossTeamChampionPool = j.at("crossTeamChampionPool").get<bool>(); 
  }
}