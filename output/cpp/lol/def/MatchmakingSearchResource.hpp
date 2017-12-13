#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/MatchmakingSearchErrorResource.hpp>
namespace lol {
  struct MatchmakingSearchResource { 
    int32_t queueId;
    std::vector<MatchmakingSearchErrorResource> errors; 
  };
  void to_json(json& j, const MatchmakingSearchResource& v) {
  j["queueId"] = v.queueId; 
  j["errors"] = v.errors; 
  }
  void from_json(const json& j, MatchmakingSearchResource& v) {
  v.queueId = j.at("queueId").get<int32_t>(); 
  v.errors = j.at("errors").get<std::vector<MatchmakingSearchErrorResource>>(); 
  }
}