#pragma once
#include "../base_def.hpp" 
#include "LolHonorV2DynamicHonorMessage.hpp"
#include "LolHonorV2VendedHonorState.hpp"
#include "LolHonorV2Reward.hpp"
namespace lol {
  struct LolHonorV2VendedHonorChange { 
    std::string actionType;
    LolHonorV2VendedHonorState previousState;
    LolHonorV2VendedHonorState currentState;
    LolHonorV2Reward reward;
    LolHonorV2DynamicHonorMessage dynamicHonorMessage; 
  };
  inline void to_json(json& j, const LolHonorV2VendedHonorChange& v) {
    j["actionType"] = v.actionType; 
    j["previousState"] = v.previousState; 
    j["currentState"] = v.currentState; 
    j["reward"] = v.reward; 
    j["dynamicHonorMessage"] = v.dynamicHonorMessage; 
  }
  inline void from_json(const json& j, LolHonorV2VendedHonorChange& v) {
    v.actionType = j.at("actionType").get<std::string>(); 
    v.previousState = j.at("previousState").get<LolHonorV2VendedHonorState>(); 
    v.currentState = j.at("currentState").get<LolHonorV2VendedHonorState>(); 
    v.reward = j.at("reward").get<LolHonorV2Reward>(); 
    v.dynamicHonorMessage = j.at("dynamicHonorMessage").get<LolHonorV2DynamicHonorMessage>(); 
  }
}