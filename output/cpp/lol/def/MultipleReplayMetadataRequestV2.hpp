#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct MultipleReplayMetadataRequestV2 { 
    std::vector<uint64_t> gameIds;
    std::string platformId; 
  };
  inline void to_json(json& j, const MultipleReplayMetadataRequestV2& v) {
    j["gameIds"] = v.gameIds; 
    j["platformId"] = v.platformId; 
  }
  inline void from_json(const json& j, MultipleReplayMetadataRequestV2& v) {
    v.gameIds = j.at("gameIds").get<std::vector<uint64_t>>(); 
    v.platformId = j.at("platformId").get<std::string>(); 
  }
}