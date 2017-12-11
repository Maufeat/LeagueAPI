#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct MultipleReplayMetadataRequestV2 { /**/ 
    std::vector<uint64_t> gameIds;/**/
    std::string platformId;/**/
  };
  static void to_json(json& j, const MultipleReplayMetadataRequestV2& v) { 
    j["gameIds"] = v.gameIds;
    j["platformId"] = v.platformId;
  }
  static void from_json(const json& j, MultipleReplayMetadataRequestV2& v) { 
    v.gameIds = j.at("gameIds").get<std::vector<uint64_t>>(); 
    v.platformId = j.at("platformId").get<std::string>(); 
  }
} 