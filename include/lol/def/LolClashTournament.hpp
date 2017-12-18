#pragma once
#include "../base_def.hpp" 
#include "LolClashTournamentPhase.hpp"
#include "ClashRewardConfigClient.hpp"
namespace lol {
  struct LolClashTournament { 
    int64_t endTimeMs;
    std::vector<int32_t> buyInOptions;
    std::vector<LolClashTournamentPhase> phases;
    int32_t maxSubstitutes;
    std::vector<ClashRewardConfigClient> rewardConfig;
    int64_t startTimeMs;
    int64_t id;
    int32_t themeId;
    std::string nameLocKey;
    bool allowRosterDisband;
    bool allowRosterCreation;
    int32_t entryFee;
    int64_t scoutingDurationMs;
    int32_t rosterSize; 
  };
  inline void to_json(json& j, const LolClashTournament& v) {
    j["endTimeMs"] = v.endTimeMs; 
    j["buyInOptions"] = v.buyInOptions; 
    j["phases"] = v.phases; 
    j["maxSubstitutes"] = v.maxSubstitutes; 
    j["rewardConfig"] = v.rewardConfig; 
    j["startTimeMs"] = v.startTimeMs; 
    j["id"] = v.id; 
    j["themeId"] = v.themeId; 
    j["nameLocKey"] = v.nameLocKey; 
    j["allowRosterDisband"] = v.allowRosterDisband; 
    j["allowRosterCreation"] = v.allowRosterCreation; 
    j["entryFee"] = v.entryFee; 
    j["scoutingDurationMs"] = v.scoutingDurationMs; 
    j["rosterSize"] = v.rosterSize; 
  }
  inline void from_json(const json& j, LolClashTournament& v) {
    v.endTimeMs = j.at("endTimeMs").get<int64_t>(); 
    v.buyInOptions = j.at("buyInOptions").get<std::vector<int32_t>>(); 
    v.phases = j.at("phases").get<std::vector<LolClashTournamentPhase>>(); 
    v.maxSubstitutes = j.at("maxSubstitutes").get<int32_t>(); 
    v.rewardConfig = j.at("rewardConfig").get<std::vector<ClashRewardConfigClient>>(); 
    v.startTimeMs = j.at("startTimeMs").get<int64_t>(); 
    v.id = j.at("id").get<int64_t>(); 
    v.themeId = j.at("themeId").get<int32_t>(); 
    v.nameLocKey = j.at("nameLocKey").get<std::string>(); 
    v.allowRosterDisband = j.at("allowRosterDisband").get<bool>(); 
    v.allowRosterCreation = j.at("allowRosterCreation").get<bool>(); 
    v.entryFee = j.at("entryFee").get<int32_t>(); 
    v.scoutingDurationMs = j.at("scoutingDurationMs").get<int64_t>(); 
    v.rosterSize = j.at("rosterSize").get<int32_t>(); 
  }
}