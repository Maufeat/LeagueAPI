#pragma once
#include "../base_def.hpp" 
#include "LolClashTournamentPhase.hpp"
#include "ClashRewardConfigClient.hpp"
namespace lol {
  struct LolClashTournament { 
    std::vector<ClashRewardConfigClient> rewardConfig;
    int32_t themeId;
    std::string nameLocKey;
    int64_t id;
    bool allowRosterDisband;
    int32_t rosterSize;
    std::vector<LolClashTournamentPhase> phases;
    int32_t maxSubstitutes;
    int64_t endTimeMs;
    std::vector<int32_t> buyInOptions;
    int32_t entryFee;
    int64_t startTimeMs;
    bool allowRosterCreation;
    int64_t scoutingDurationMs; 
  };
  inline void to_json(json& j, const LolClashTournament& v) {
    j["rewardConfig"] = v.rewardConfig; 
    j["themeId"] = v.themeId; 
    j["nameLocKey"] = v.nameLocKey; 
    j["id"] = v.id; 
    j["allowRosterDisband"] = v.allowRosterDisband; 
    j["rosterSize"] = v.rosterSize; 
    j["phases"] = v.phases; 
    j["maxSubstitutes"] = v.maxSubstitutes; 
    j["endTimeMs"] = v.endTimeMs; 
    j["buyInOptions"] = v.buyInOptions; 
    j["entryFee"] = v.entryFee; 
    j["startTimeMs"] = v.startTimeMs; 
    j["allowRosterCreation"] = v.allowRosterCreation; 
    j["scoutingDurationMs"] = v.scoutingDurationMs; 
  }
  inline void from_json(const json& j, LolClashTournament& v) {
    v.rewardConfig = j.at("rewardConfig").get<std::vector<ClashRewardConfigClient>>(); 
    v.themeId = j.at("themeId").get<int32_t>(); 
    v.nameLocKey = j.at("nameLocKey").get<std::string>(); 
    v.id = j.at("id").get<int64_t>(); 
    v.allowRosterDisband = j.at("allowRosterDisband").get<bool>(); 
    v.rosterSize = j.at("rosterSize").get<int32_t>(); 
    v.phases = j.at("phases").get<std::vector<LolClashTournamentPhase>>(); 
    v.maxSubstitutes = j.at("maxSubstitutes").get<int32_t>(); 
    v.endTimeMs = j.at("endTimeMs").get<int64_t>(); 
    v.buyInOptions = j.at("buyInOptions").get<std::vector<int32_t>>(); 
    v.entryFee = j.at("entryFee").get<int32_t>(); 
    v.startTimeMs = j.at("startTimeMs").get<int64_t>(); 
    v.allowRosterCreation = j.at("allowRosterCreation").get<bool>(); 
    v.scoutingDurationMs = j.at("scoutingDurationMs").get<int64_t>(); 
  }
}