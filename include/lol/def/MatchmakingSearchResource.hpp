#pragma once
#include "../base_def.hpp" 
#include "MatchmakingSearchErrorResource.hpp"
namespace lol {
  struct MatchmakingSearchResource { 
    int32_t queueId;
    std::vector<MatchmakingSearchErrorResource> errors; 
  };
  inline void to_json(json& j, const MatchmakingSearchResource& v) {
    j["queueId"] = v.queueId; 
    j["errors"] = v.errors; 
  }
  inline void from_json(const json& j, MatchmakingSearchResource& v) {
    v.queueId = j.at("queueId").get<int32_t>(); 
    v.errors = j.at("errors").get<std::vector<MatchmakingSearchErrorResource>>(); 
  }
}