#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLobbyTeamBuilderTbLobbySlotResource { 
    uint64_t summonerId;
    int32_t slotId;
    std::optional<std::string> excludedPositionPreference;
    std::vector<std::string> draftPositionPreferences;
    bool autoFillEligible;
    std::string summonerName;
    bool autoFillProtectedForPromos;
    bool autoFillProtectedForSoloing;
    bool showPositionExcluder;
    bool autoFillProtectedForStreaking; 
  };
  inline void to_json(json& j, const LolLobbyTeamBuilderTbLobbySlotResource& v) {
    j["summonerId"] = v.summonerId; 
    j["slotId"] = v.slotId; 
    if(v.excludedPositionPreference)
      j["excludedPositionPreference"] = *v.excludedPositionPreference;
    j["draftPositionPreferences"] = v.draftPositionPreferences; 
    j["autoFillEligible"] = v.autoFillEligible; 
    j["summonerName"] = v.summonerName; 
    j["autoFillProtectedForPromos"] = v.autoFillProtectedForPromos; 
    j["autoFillProtectedForSoloing"] = v.autoFillProtectedForSoloing; 
    j["showPositionExcluder"] = v.showPositionExcluder; 
    j["autoFillProtectedForStreaking"] = v.autoFillProtectedForStreaking; 
  }
  inline void from_json(const json& j, LolLobbyTeamBuilderTbLobbySlotResource& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.slotId = j.at("slotId").get<int32_t>(); 
    if(auto it = j.find("excludedPositionPreference"); it != j.end() && !it->is_null())
      v.excludedPositionPreference = it->get<std::optional<std::string>>(); 
    v.draftPositionPreferences = j.at("draftPositionPreferences").get<std::vector<std::string>>(); 
    v.autoFillEligible = j.at("autoFillEligible").get<bool>(); 
    v.summonerName = j.at("summonerName").get<std::string>(); 
    v.autoFillProtectedForPromos = j.at("autoFillProtectedForPromos").get<bool>(); 
    v.autoFillProtectedForSoloing = j.at("autoFillProtectedForSoloing").get<bool>(); 
    v.showPositionExcluder = j.at("showPositionExcluder").get<bool>(); 
    v.autoFillProtectedForStreaking = j.at("autoFillProtectedForStreaking").get<bool>(); 
  }
}