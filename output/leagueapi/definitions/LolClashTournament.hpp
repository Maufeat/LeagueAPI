#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolClashTournamentPhase.hpp>"
#include "<leagueapi/definitions/ClashRewardConfigClient.hpp>"

namespace leagueapi {
  struct LolClashTournament { /**/ 
    bool allowRosterDisband;/**/
    int32_t themeId;/**/
    std::vector<int32_t> buyInOptions;/**/
    int64_t id;/**/
    int64_t scoutingDurationMs;/**/
    int64_t startTimeMs;/**/
    int32_t maxSubstitutes;/**/
    int32_t rosterSize;/**/
    std::string nameLocKey;/**/
    int32_t entryFee;/**/
    std::vector<ClashRewardConfigClient> rewardConfig;/**/
    std::vector<LolClashTournamentPhase> phases;/**/
    bool allowRosterCreation;/**/
    int64_t endTimeMs;/**/
  };
  static void to_json(json& j, const LolClashTournament& v) { 
    j["allowRosterDisband"] = v.allowRosterDisband;
    j["themeId"] = v.themeId;
    j["buyInOptions"] = v.buyInOptions;
    j["id"] = v.id;
    j["scoutingDurationMs"] = v.scoutingDurationMs;
    j["startTimeMs"] = v.startTimeMs;
    j["maxSubstitutes"] = v.maxSubstitutes;
    j["rosterSize"] = v.rosterSize;
    j["nameLocKey"] = v.nameLocKey;
    j["entryFee"] = v.entryFee;
    j["rewardConfig"] = v.rewardConfig;
    j["phases"] = v.phases;
    j["allowRosterCreation"] = v.allowRosterCreation;
    j["endTimeMs"] = v.endTimeMs;
  }
  static void from_json(const json& j, LolClashTournament& v) { 
    v.allowRosterDisband = j.at("allowRosterDisband").get<bool>(); 
    v.themeId = j.at("themeId").get<int32_t>(); 
    v.buyInOptions = j.at("buyInOptions").get<std::vector<int32_t>>(); 
    v.id = j.at("id").get<int64_t>(); 
    v.scoutingDurationMs = j.at("scoutingDurationMs").get<int64_t>(); 
    v.startTimeMs = j.at("startTimeMs").get<int64_t>(); 
    v.maxSubstitutes = j.at("maxSubstitutes").get<int32_t>(); 
    v.rosterSize = j.at("rosterSize").get<int32_t>(); 
    v.nameLocKey = j.at("nameLocKey").get<std::string>(); 
    v.entryFee = j.at("entryFee").get<int32_t>(); 
    v.rewardConfig = j.at("rewardConfig").get<std::vector<ClashRewardConfigClient>>(); 
    v.phases = j.at("phases").get<std::vector<LolClashTournamentPhase>>(); 
    v.allowRosterCreation = j.at("allowRosterCreation").get<bool>(); 
    v.endTimeMs = j.at("endTimeMs").get<int64_t>(); 
  }
} 