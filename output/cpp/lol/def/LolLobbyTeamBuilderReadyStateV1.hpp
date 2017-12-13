#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolLobbyTeamBuilderReadyStateV1 { 
    bool premadeSizeAllowed;
    bool requiredPositionCoverageMet;
    bool readyToMatchmake;
    std::vector<int32_t> allowablePremadeSizes; 
  };
  void to_json(json& j, const LolLobbyTeamBuilderReadyStateV1& v) {
  j["premadeSizeAllowed"] = v.premadeSizeAllowed; 
  j["requiredPositionCoverageMet"] = v.requiredPositionCoverageMet; 
  j["readyToMatchmake"] = v.readyToMatchmake; 
  j["allowablePremadeSizes"] = v.allowablePremadeSizes; 
  }
  void from_json(const json& j, LolLobbyTeamBuilderReadyStateV1& v) {
  v.premadeSizeAllowed = j.at("premadeSizeAllowed").get<bool>(); 
  v.requiredPositionCoverageMet = j.at("requiredPositionCoverageMet").get<bool>(); 
  v.readyToMatchmake = j.at("readyToMatchmake").get<bool>(); 
  v.allowablePremadeSizes = j.at("allowablePremadeSizes").get<std::vector<int32_t>>(); 
  }
}