#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolLobbyTeamBuilderTbLobbySlotResource { 
    bool showPositionExcluder;
    bool autoFillEligible;
    bool autoFillProtectedForSoloing;
    std::string summonerName;
    std::vector<std::string> draftPositionPreferences;
    bool autoFillProtectedForPromos;
    bool autoFillProtectedForStreaking;
    int32_t slotId;
    std::optional<std::string> excludedPositionPreference;
    uint64_t summonerId; 
  };
  void to_json(json& j, const LolLobbyTeamBuilderTbLobbySlotResource& v) {
    j["showPositionExcluder"] = v.showPositionExcluder; 
    j["autoFillEligible"] = v.autoFillEligible; 
    j["autoFillProtectedForSoloing"] = v.autoFillProtectedForSoloing; 
    j["summonerName"] = v.summonerName; 
    j["draftPositionPreferences"] = v.draftPositionPreferences; 
    j["autoFillProtectedForPromos"] = v.autoFillProtectedForPromos; 
    j["autoFillProtectedForStreaking"] = v.autoFillProtectedForStreaking; 
    j["slotId"] = v.slotId; 
    if(v.excludedPositionPreference)
      j["excludedPositionPreference"] = *v.excludedPositionPreference;
    j["summonerId"] = v.summonerId; 
  }
  void from_json(const json& j, LolLobbyTeamBuilderTbLobbySlotResource& v) {
    v.showPositionExcluder = j.at("showPositionExcluder").get<bool>(); 
    v.autoFillEligible = j.at("autoFillEligible").get<bool>(); 
    v.autoFillProtectedForSoloing = j.at("autoFillProtectedForSoloing").get<bool>(); 
    v.summonerName = j.at("summonerName").get<std::string>(); 
    v.draftPositionPreferences = j.at("draftPositionPreferences").get<std::vector<std::string>>(); 
    v.autoFillProtectedForPromos = j.at("autoFillProtectedForPromos").get<bool>(); 
    v.autoFillProtectedForStreaking = j.at("autoFillProtectedForStreaking").get<bool>(); 
    v.slotId = j.at("slotId").get<int32_t>(); 
    if(auto it = j.find("excludedPositionPreference"); it != j.end() && !it->is_null())
      v.excludedPositionPreference = it->get<std::optional<std::string>>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
  }
}