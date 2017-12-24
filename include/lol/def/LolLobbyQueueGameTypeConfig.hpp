#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLobbyQueueGameTypeConfig { 
    bool teamChampionPool;
    bool reroll;
    bool exclusivePick;
    bool deathMatch;
    std::string pickMode;
    std::optional<int32_t> numPlayersPerTeamOverride;
    bool allowTrades;
    std::optional<std::string> gameModeOverride;
    bool onboardCoopBeginner;
    bool doNotRemove;
    bool crossTeamChampionPool;
    bool battleBoost;
    int32_t postPickTimerDuration;
    bool duplicatePick;
    std::string name;
    bool learningQuests;
    std::string banMode;
    int32_t maxAllowableBans;
    int64_t id;
    bool advancedLearningQuests;
    int32_t banTimerDuration;
    int32_t mainPickTimerDuration; 
  };
  inline void to_json(json& j, const LolLobbyQueueGameTypeConfig& v) {
    j["teamChampionPool"] = v.teamChampionPool; 
    j["reroll"] = v.reroll; 
    j["exclusivePick"] = v.exclusivePick; 
    j["deathMatch"] = v.deathMatch; 
    j["pickMode"] = v.pickMode; 
    if(v.numPlayersPerTeamOverride)
      j["numPlayersPerTeamOverride"] = *v.numPlayersPerTeamOverride;
    j["allowTrades"] = v.allowTrades; 
    if(v.gameModeOverride)
      j["gameModeOverride"] = *v.gameModeOverride;
    j["onboardCoopBeginner"] = v.onboardCoopBeginner; 
    j["doNotRemove"] = v.doNotRemove; 
    j["crossTeamChampionPool"] = v.crossTeamChampionPool; 
    j["battleBoost"] = v.battleBoost; 
    j["postPickTimerDuration"] = v.postPickTimerDuration; 
    j["duplicatePick"] = v.duplicatePick; 
    j["name"] = v.name; 
    j["learningQuests"] = v.learningQuests; 
    j["banMode"] = v.banMode; 
    j["maxAllowableBans"] = v.maxAllowableBans; 
    j["id"] = v.id; 
    j["advancedLearningQuests"] = v.advancedLearningQuests; 
    j["banTimerDuration"] = v.banTimerDuration; 
    j["mainPickTimerDuration"] = v.mainPickTimerDuration; 
  }
  inline void from_json(const json& j, LolLobbyQueueGameTypeConfig& v) {
    v.teamChampionPool = j.at("teamChampionPool").get<bool>(); 
    v.reroll = j.at("reroll").get<bool>(); 
    v.exclusivePick = j.at("exclusivePick").get<bool>(); 
    v.deathMatch = j.at("deathMatch").get<bool>(); 
    v.pickMode = j.at("pickMode").get<std::string>(); 
    if(auto it = j.find("numPlayersPerTeamOverride"); it != j.end() && !it->is_null())
      v.numPlayersPerTeamOverride = it->get<std::optional<int32_t>>(); 
    v.allowTrades = j.at("allowTrades").get<bool>(); 
    if(auto it = j.find("gameModeOverride"); it != j.end() && !it->is_null())
      v.gameModeOverride = it->get<std::optional<std::string>>(); 
    v.onboardCoopBeginner = j.at("onboardCoopBeginner").get<bool>(); 
    v.doNotRemove = j.at("doNotRemove").get<bool>(); 
    v.crossTeamChampionPool = j.at("crossTeamChampionPool").get<bool>(); 
    v.battleBoost = j.at("battleBoost").get<bool>(); 
    v.postPickTimerDuration = j.at("postPickTimerDuration").get<int32_t>(); 
    v.duplicatePick = j.at("duplicatePick").get<bool>(); 
    v.name = j.at("name").get<std::string>(); 
    v.learningQuests = j.at("learningQuests").get<bool>(); 
    v.banMode = j.at("banMode").get<std::string>(); 
    v.maxAllowableBans = j.at("maxAllowableBans").get<int32_t>(); 
    v.id = j.at("id").get<int64_t>(); 
    v.advancedLearningQuests = j.at("advancedLearningQuests").get<bool>(); 
    v.banTimerDuration = j.at("banTimerDuration").get<int32_t>(); 
    v.mainPickTimerDuration = j.at("mainPickTimerDuration").get<int32_t>(); 
  }
}