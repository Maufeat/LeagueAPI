#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLobbyQueueGameTypeConfig { 
    std::string name;
    int64_t id;
    std::optional<std::string> gameModeOverride;
    bool battleBoost;
    bool duplicatePick;
    bool doNotRemove;
    int32_t mainPickTimerDuration;
    bool reroll;
    bool advancedLearningQuests;
    std::string banMode;
    bool learningQuests;
    bool exclusivePick;
    int32_t maxAllowableBans;
    bool deathMatch;
    bool crossTeamChampionPool;
    std::string pickMode;
    int32_t banTimerDuration;
    int32_t postPickTimerDuration;
    std::optional<int32_t> numPlayersPerTeamOverride;
    bool teamChampionPool;
    bool onboardCoopBeginner;
    bool allowTrades; 
  };
  inline void to_json(json& j, const LolLobbyQueueGameTypeConfig& v) {
    j["name"] = v.name; 
    j["id"] = v.id; 
    if(v.gameModeOverride)
      j["gameModeOverride"] = *v.gameModeOverride;
    j["battleBoost"] = v.battleBoost; 
    j["duplicatePick"] = v.duplicatePick; 
    j["doNotRemove"] = v.doNotRemove; 
    j["mainPickTimerDuration"] = v.mainPickTimerDuration; 
    j["reroll"] = v.reroll; 
    j["advancedLearningQuests"] = v.advancedLearningQuests; 
    j["banMode"] = v.banMode; 
    j["learningQuests"] = v.learningQuests; 
    j["exclusivePick"] = v.exclusivePick; 
    j["maxAllowableBans"] = v.maxAllowableBans; 
    j["deathMatch"] = v.deathMatch; 
    j["crossTeamChampionPool"] = v.crossTeamChampionPool; 
    j["pickMode"] = v.pickMode; 
    j["banTimerDuration"] = v.banTimerDuration; 
    j["postPickTimerDuration"] = v.postPickTimerDuration; 
    if(v.numPlayersPerTeamOverride)
      j["numPlayersPerTeamOverride"] = *v.numPlayersPerTeamOverride;
    j["teamChampionPool"] = v.teamChampionPool; 
    j["onboardCoopBeginner"] = v.onboardCoopBeginner; 
    j["allowTrades"] = v.allowTrades; 
  }
  inline void from_json(const json& j, LolLobbyQueueGameTypeConfig& v) {
    v.name = j.at("name").get<std::string>(); 
    v.id = j.at("id").get<int64_t>(); 
    if(auto it = j.find("gameModeOverride"); it != j.end() && !it->is_null())
      v.gameModeOverride = it->get<std::optional<std::string>>(); 
    v.battleBoost = j.at("battleBoost").get<bool>(); 
    v.duplicatePick = j.at("duplicatePick").get<bool>(); 
    v.doNotRemove = j.at("doNotRemove").get<bool>(); 
    v.mainPickTimerDuration = j.at("mainPickTimerDuration").get<int32_t>(); 
    v.reroll = j.at("reroll").get<bool>(); 
    v.advancedLearningQuests = j.at("advancedLearningQuests").get<bool>(); 
    v.banMode = j.at("banMode").get<std::string>(); 
    v.learningQuests = j.at("learningQuests").get<bool>(); 
    v.exclusivePick = j.at("exclusivePick").get<bool>(); 
    v.maxAllowableBans = j.at("maxAllowableBans").get<int32_t>(); 
    v.deathMatch = j.at("deathMatch").get<bool>(); 
    v.crossTeamChampionPool = j.at("crossTeamChampionPool").get<bool>(); 
    v.pickMode = j.at("pickMode").get<std::string>(); 
    v.banTimerDuration = j.at("banTimerDuration").get<int32_t>(); 
    v.postPickTimerDuration = j.at("postPickTimerDuration").get<int32_t>(); 
    if(auto it = j.find("numPlayersPerTeamOverride"); it != j.end() && !it->is_null())
      v.numPlayersPerTeamOverride = it->get<std::optional<int32_t>>(); 
    v.teamChampionPool = j.at("teamChampionPool").get<bool>(); 
    v.onboardCoopBeginner = j.at("onboardCoopBeginner").get<bool>(); 
    v.allowTrades = j.at("allowTrades").get<bool>(); 
  }
}