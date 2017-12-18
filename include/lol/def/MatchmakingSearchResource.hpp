#pragma once
#include "../base_def.hpp" 
#include "MatchmakingSearchErrorResource.hpp"
namespace lol {
  struct MatchmakingSearchResource { 
    std::vector<MatchmakingSearchErrorResource> errors;
    int32_t queueId; 
  };
  inline void to_json(json& j, const MatchmakingSearchResource& v) {
    j["errors"] = v.errors; 
    j["queueId"] = v.queueId; 
  }
  inline void from_json(const json& j, MatchmakingSearchResource& v) {
    v.errors = j.at("errors").get<std::vector<MatchmakingSearchErrorResource>>(); 
    v.queueId = j.at("queueId").get<int32_t>(); 
  }
}