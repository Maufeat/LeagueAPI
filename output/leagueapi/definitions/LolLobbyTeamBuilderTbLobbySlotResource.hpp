#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolLobbyTeamBuilderTbLobbySlotResource { /**/ 
    std::optional<std::string> excludedPositionPreference;/**/
    int32_t slotId;/**/
    uint64_t summonerId;/**/
    bool autoFillProtectedForPromos;/**/
    bool autoFillProtectedForStreaking;/**/
    std::vector<std::string> draftPositionPreferences;/**/
    std::string summonerName;/**/
    bool autoFillProtectedForSoloing;/**/
    bool autoFillEligible;/**/
    bool showPositionExcluder;/**/
  };
  static void to_json(json& j, const LolLobbyTeamBuilderTbLobbySlotResource& v) { 
    j["excludedPositionPreference"] = v.excludedPositionPreference;
    j["slotId"] = v.slotId;
    j["summonerId"] = v.summonerId;
    j["autoFillProtectedForPromos"] = v.autoFillProtectedForPromos;
    j["autoFillProtectedForStreaking"] = v.autoFillProtectedForStreaking;
    j["draftPositionPreferences"] = v.draftPositionPreferences;
    j["summonerName"] = v.summonerName;
    j["autoFillProtectedForSoloing"] = v.autoFillProtectedForSoloing;
    j["autoFillEligible"] = v.autoFillEligible;
    j["showPositionExcluder"] = v.showPositionExcluder;
  }
  static void from_json(const json& j, LolLobbyTeamBuilderTbLobbySlotResource& v) { 
    v.excludedPositionPreference = j.at("excludedPositionPreference").get<std::optional<std::string>>(); 
    v.slotId = j.at("slotId").get<int32_t>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.autoFillProtectedForPromos = j.at("autoFillProtectedForPromos").get<bool>(); 
    v.autoFillProtectedForStreaking = j.at("autoFillProtectedForStreaking").get<bool>(); 
    v.draftPositionPreferences = j.at("draftPositionPreferences").get<std::vector<std::string>>(); 
    v.summonerName = j.at("summonerName").get<std::string>(); 
    v.autoFillProtectedForSoloing = j.at("autoFillProtectedForSoloing").get<bool>(); 
    v.autoFillEligible = j.at("autoFillEligible").get<bool>(); 
    v.showPositionExcluder = j.at("showPositionExcluder").get<bool>(); 
  }
} 