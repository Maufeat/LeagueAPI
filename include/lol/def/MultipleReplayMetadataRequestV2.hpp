#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct MultipleReplayMetadataRequestV2 { 
    std::string platformId;
    std::vector<uint64_t> gameIds; 
  };
  inline void to_json(json& j, const MultipleReplayMetadataRequestV2& v) {
    j["platformId"] = v.platformId; 
    j["gameIds"] = v.gameIds; 
  }
  inline void from_json(const json& j, MultipleReplayMetadataRequestV2& v) {
    v.platformId = j.at("platformId").get<std::string>(); 
    v.gameIds = j.at("gameIds").get<std::vector<uint64_t>>(); 
  }
}