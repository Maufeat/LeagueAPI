#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolHonorV2Reward.hpp>"
#include "<leagueapi/definitions/LolHonorV2VendedHonorState.hpp>"

namespace leagueapi {
  struct LolHonorV2VendedHonorChange { /**/ 
    LolHonorV2VendedHonorState currentState;/**/
    std::string actionType;/**/
    LolHonorV2Reward reward;/**/
    LolHonorV2VendedHonorState previousState;/**/
  };
  static void to_json(json& j, const LolHonorV2VendedHonorChange& v) { 
    j["currentState"] = v.currentState;
    j["actionType"] = v.actionType;
    j["reward"] = v.reward;
    j["previousState"] = v.previousState;
  }
  static void from_json(const json& j, LolHonorV2VendedHonorChange& v) { 
    v.currentState = j.at("currentState").get<LolHonorV2VendedHonorState>(); 
    v.actionType = j.at("actionType").get<std::string>(); 
    v.reward = j.at("reward").get<LolHonorV2Reward>(); 
    v.previousState = j.at("previousState").get<LolHonorV2VendedHonorState>(); 
  }
} 