#pragma once
#include "../base_def.hpp" 
#include "LolClashTournamentPhase.hpp"
#include "ClashRewardConfigClient.hpp"
namespace lol {
  struct LolClashTournament { 
    int64_t id;
    int32_t themeId;
    std::string nameLocKey;
    std::vector<int32_t> buyInOptions;
    int32_t entryFee;
    int32_t rosterSize;
    bool allowRosterCreation;
    bool allowRosterDisband;
    int64_t scoutingDurationMs;
    int64_t startTimeMs;
    int64_t endTimeMs;
    int32_t maxSubstitutes;
    std::vector<LolClashTournamentPhase> phases;
    std::vector<ClashRewardConfigClient> rewardConfig; 
  };
  inline void to_json(json& j, const LolClashTournament& v) {
    j["id"] = v.id; 
    j["themeId"] = v.themeId; 
    j["nameLocKey"] = v.nameLocKey; 
    j["buyInOptions"] = v.buyInOptions; 
    j["entryFee"] = v.entryFee; 
    j["rosterSize"] = v.rosterSize; 
    j["allowRosterCreation"] = v.allowRosterCreation; 
    j["allowRosterDisband"] = v.allowRosterDisband; 
    j["scoutingDurationMs"] = v.scoutingDurationMs; 
    j["startTimeMs"] = v.startTimeMs; 
    j["endTimeMs"] = v.endTimeMs; 
    j["maxSubstitutes"] = v.maxSubstitutes; 
    j["phases"] = v.phases; 
    j["rewardConfig"] = v.rewardConfig; 
  }
  inline void from_json(const json& j, LolClashTournament& v) {
    v.id = j.at("id").get<int64_t>(); 
    v.themeId = j.at("themeId").get<int32_t>(); 
    v.nameLocKey = j.at("nameLocKey").get<std::string>(); 
    v.buyInOptions = j.at("buyInOptions").get<std::vector<int32_t>>(); 
    v.entryFee = j.at("entryFee").get<int32_t>(); 
    v.rosterSize = j.at("rosterSize").get<int32_t>(); 
    v.allowRosterCreation = j.at("allowRosterCreation").get<bool>(); 
    v.allowRosterDisband = j.at("allowRosterDisband").get<bool>(); 
    v.scoutingDurationMs = j.at("scoutingDurationMs").get<int64_t>(); 
    v.startTimeMs = j.at("startTimeMs").get<int64_t>(); 
    v.endTimeMs = j.at("endTimeMs").get<int64_t>(); 
    v.maxSubstitutes = j.at("maxSubstitutes").get<int32_t>(); 
    v.phases = j.at("phases").get<std::vector<LolClashTournamentPhase>>(); 
    v.rewardConfig = j.at("rewardConfig").get<std::vector<ClashRewardConfigClient>>(); 
  }
}