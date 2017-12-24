#pragma once
#include "../base_def.hpp" 
#include "LolClashTournamentPhase.hpp"
#include "ClashRewardConfigClient.hpp"
namespace lol {
  struct LolClashTournament { 
    std::vector<LolClashTournamentPhase> phases;
    bool allowRosterDisband;
    int64_t startTimeMs;
    std::string nameLocKey;
    int64_t scoutingDurationMs;
    int32_t themeId;
    int32_t rosterSize;
    std::vector<ClashRewardConfigClient> rewardConfig;
    int64_t endTimeMs;
    std::vector<int32_t> buyInOptions;
    int64_t id;
    int32_t entryFee;
    int32_t maxSubstitutes;
    bool allowRosterCreation; 
  };
  inline void to_json(json& j, const LolClashTournament& v) {
    j["phases"] = v.phases; 
    j["allowRosterDisband"] = v.allowRosterDisband; 
    j["startTimeMs"] = v.startTimeMs; 
    j["nameLocKey"] = v.nameLocKey; 
    j["scoutingDurationMs"] = v.scoutingDurationMs; 
    j["themeId"] = v.themeId; 
    j["rosterSize"] = v.rosterSize; 
    j["rewardConfig"] = v.rewardConfig; 
    j["endTimeMs"] = v.endTimeMs; 
    j["buyInOptions"] = v.buyInOptions; 
    j["id"] = v.id; 
    j["entryFee"] = v.entryFee; 
    j["maxSubstitutes"] = v.maxSubstitutes; 
    j["allowRosterCreation"] = v.allowRosterCreation; 
  }
  inline void from_json(const json& j, LolClashTournament& v) {
    v.phases = j.at("phases").get<std::vector<LolClashTournamentPhase>>(); 
    v.allowRosterDisband = j.at("allowRosterDisband").get<bool>(); 
    v.startTimeMs = j.at("startTimeMs").get<int64_t>(); 
    v.nameLocKey = j.at("nameLocKey").get<std::string>(); 
    v.scoutingDurationMs = j.at("scoutingDurationMs").get<int64_t>(); 
    v.themeId = j.at("themeId").get<int32_t>(); 
    v.rosterSize = j.at("rosterSize").get<int32_t>(); 
    v.rewardConfig = j.at("rewardConfig").get<std::vector<ClashRewardConfigClient>>(); 
    v.endTimeMs = j.at("endTimeMs").get<int64_t>(); 
    v.buyInOptions = j.at("buyInOptions").get<std::vector<int32_t>>(); 
    v.id = j.at("id").get<int64_t>(); 
    v.entryFee = j.at("entryFee").get<int32_t>(); 
    v.maxSubstitutes = j.at("maxSubstitutes").get<int32_t>(); 
    v.allowRosterCreation = j.at("allowRosterCreation").get<bool>(); 
  }
}