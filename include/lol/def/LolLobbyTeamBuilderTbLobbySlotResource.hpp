#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLobbyTeamBuilderTbLobbySlotResource { 
    int32_t slotId;
    std::string summonerName;
    uint64_t summonerId;
    std::vector<std::string> draftPositionPreferences;
    std::optional<std::string> excludedPositionPreference;
    bool showPositionExcluder;
    bool autoFillEligible;
    bool autoFillProtectedForStreaking;
    bool autoFillProtectedForPromos;
    bool autoFillProtectedForSoloing; 
  };
  inline void to_json(json& j, const LolLobbyTeamBuilderTbLobbySlotResource& v) {
    j["slotId"] = v.slotId; 
    j["summonerName"] = v.summonerName; 
    j["summonerId"] = v.summonerId; 
    j["draftPositionPreferences"] = v.draftPositionPreferences; 
    if(v.excludedPositionPreference)
      j["excludedPositionPreference"] = *v.excludedPositionPreference;
    j["showPositionExcluder"] = v.showPositionExcluder; 
    j["autoFillEligible"] = v.autoFillEligible; 
    j["autoFillProtectedForStreaking"] = v.autoFillProtectedForStreaking; 
    j["autoFillProtectedForPromos"] = v.autoFillProtectedForPromos; 
    j["autoFillProtectedForSoloing"] = v.autoFillProtectedForSoloing; 
  }
  inline void from_json(const json& j, LolLobbyTeamBuilderTbLobbySlotResource& v) {
    v.slotId = j.at("slotId").get<int32_t>(); 
    v.summonerName = j.at("summonerName").get<std::string>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.draftPositionPreferences = j.at("draftPositionPreferences").get<std::vector<std::string>>(); 
    if(auto it = j.find("excludedPositionPreference"); it != j.end() && !it->is_null())
      v.excludedPositionPreference = it->get<std::optional<std::string>>(); 
    v.showPositionExcluder = j.at("showPositionExcluder").get<bool>(); 
    v.autoFillEligible = j.at("autoFillEligible").get<bool>(); 
    v.autoFillProtectedForStreaking = j.at("autoFillProtectedForStreaking").get<bool>(); 
    v.autoFillProtectedForPromos = j.at("autoFillProtectedForPromos").get<bool>(); 
    v.autoFillProtectedForSoloing = j.at("autoFillProtectedForSoloing").get<bool>(); 
  }
}