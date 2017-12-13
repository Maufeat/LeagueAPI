#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolLobbyTeamBuilderLobbyPositionPreferences.hpp>
namespace lol {
  struct LolLobbyTeamBuilderLobbyMember { 
    LolLobbyTeamBuilderLobbyPositionPreferences positionPreferences;
    std::optional<std::string> excludedPositionPreference;
    bool autoFillEligible;
    bool autoFillProtectedForPromos;
    uint64_t id;
    bool canInviteOthers;
    bool autoFillProtectedForSoloing;
    bool isOwner;
    bool autoFillProtectedForStreaking;
    bool showPositionExcluder; 
  };
  void to_json(json& j, const LolLobbyTeamBuilderLobbyMember& v) {
  j["positionPreferences"] = v.positionPreferences; 
  j["excludedPositionPreference"] = v.excludedPositionPreference; 
  j["autoFillEligible"] = v.autoFillEligible; 
  j["autoFillProtectedForPromos"] = v.autoFillProtectedForPromos; 
  j["id"] = v.id; 
  j["canInviteOthers"] = v.canInviteOthers; 
  j["autoFillProtectedForSoloing"] = v.autoFillProtectedForSoloing; 
  j["isOwner"] = v.isOwner; 
  j["autoFillProtectedForStreaking"] = v.autoFillProtectedForStreaking; 
  j["showPositionExcluder"] = v.showPositionExcluder; 
  }
  void from_json(const json& j, LolLobbyTeamBuilderLobbyMember& v) {
  v.positionPreferences = j.at("positionPreferences").get<LolLobbyTeamBuilderLobbyPositionPreferences>(); 
  v.excludedPositionPreference = j.at("excludedPositionPreference").get<std::optional<std::string>>(); 
  v.autoFillEligible = j.at("autoFillEligible").get<bool>(); 
  v.autoFillProtectedForPromos = j.at("autoFillProtectedForPromos").get<bool>(); 
  v.id = j.at("id").get<uint64_t>(); 
  v.canInviteOthers = j.at("canInviteOthers").get<bool>(); 
  v.autoFillProtectedForSoloing = j.at("autoFillProtectedForSoloing").get<bool>(); 
  v.isOwner = j.at("isOwner").get<bool>(); 
  v.autoFillProtectedForStreaking = j.at("autoFillProtectedForStreaking").get<bool>(); 
  v.showPositionExcluder = j.at("showPositionExcluder").get<bool>(); 
  }
}