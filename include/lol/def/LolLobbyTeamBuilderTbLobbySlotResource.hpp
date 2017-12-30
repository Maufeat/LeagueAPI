#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLobbyTeamBuilderTbLobbySlotResource { 
    std::string summonerName;
    bool showPositionExcluder;
    int32_t slotId;
    bool autoFillEligible;
    bool autoFillProtectedForStreaking;
    std::vector<std::string> draftPositionPreferences;
    std::optional<std::string> excludedPositionPreference;
    uint64_t summonerId;
    bool autoFillProtectedForSoloing;
    bool autoFillProtectedForPromos; 
  };
  inline void to_json(json& j, const LolLobbyTeamBuilderTbLobbySlotResource& v) {
    j["summonerName"] = v.summonerName; 
    j["showPositionExcluder"] = v.showPositionExcluder; 
    j["slotId"] = v.slotId; 
    j["autoFillEligible"] = v.autoFillEligible; 
    j["autoFillProtectedForStreaking"] = v.autoFillProtectedForStreaking; 
    j["draftPositionPreferences"] = v.draftPositionPreferences; 
    if(v.excludedPositionPreference)
      j["excludedPositionPreference"] = *v.excludedPositionPreference;
    j["summonerId"] = v.summonerId; 
    j["autoFillProtectedForSoloing"] = v.autoFillProtectedForSoloing; 
    j["autoFillProtectedForPromos"] = v.autoFillProtectedForPromos; 
  }
  inline void from_json(const json& j, LolLobbyTeamBuilderTbLobbySlotResource& v) {
    v.summonerName = j.at("summonerName").get<std::string>(); 
    v.showPositionExcluder = j.at("showPositionExcluder").get<bool>(); 
    v.slotId = j.at("slotId").get<int32_t>(); 
    v.autoFillEligible = j.at("autoFillEligible").get<bool>(); 
    v.autoFillProtectedForStreaking = j.at("autoFillProtectedForStreaking").get<bool>(); 
    v.draftPositionPreferences = j.at("draftPositionPreferences").get<std::vector<std::string>>(); 
    if(auto it = j.find("excludedPositionPreference"); it != j.end() && !it->is_null())
      v.excludedPositionPreference = it->get<std::optional<std::string>>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.autoFillProtectedForSoloing = j.at("autoFillProtectedForSoloing").get<bool>(); 
    v.autoFillProtectedForPromos = j.at("autoFillProtectedForPromos").get<bool>(); 
  }
}