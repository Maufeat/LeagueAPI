#pragma once
#include "../base_def.hpp" 
#include "LolHonorV2VendedHonorState.hpp"
#include "LolHonorV2Reward.hpp"
namespace lol {
  struct LolHonorV2VendedHonorChange { 
    LolHonorV2VendedHonorState previousState;
    std::string actionType;
    LolHonorV2VendedHonorState currentState;
    LolHonorV2Reward reward; 
  };
  inline void to_json(json& j, const LolHonorV2VendedHonorChange& v) {
    j["previousState"] = v.previousState; 
    j["actionType"] = v.actionType; 
    j["currentState"] = v.currentState; 
    j["reward"] = v.reward; 
  }
  inline void from_json(const json& j, LolHonorV2VendedHonorChange& v) {
    v.previousState = j.at("previousState").get<LolHonorV2VendedHonorState>(); 
    v.actionType = j.at("actionType").get<std::string>(); 
    v.currentState = j.at("currentState").get<LolHonorV2VendedHonorState>(); 
    v.reward = j.at("reward").get<LolHonorV2Reward>(); 
  }
}