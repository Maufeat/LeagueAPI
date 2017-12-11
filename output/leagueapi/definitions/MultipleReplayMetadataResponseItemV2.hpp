#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/ReplayResponseStatus.hpp>"
#include "<leagueapi/definitions/ReplayMetadataV2.hpp>"

namespace leagueapi {
  struct MultipleReplayMetadataResponseItemV2 { /**/ 
    ReplayMetadataV2 metadata;/**/
    uint64_t gameId;/**/
    ReplayResponseStatus status;/**/
  };
  static void to_json(json& j, const MultipleReplayMetadataResponseItemV2& v) { 
    j["metadata"] = v.metadata;
    j["gameId"] = v.gameId;
    j["status"] = v.status;
  }
  static void from_json(const json& j, MultipleReplayMetadataResponseItemV2& v) { 
    v.metadata = j.at("metadata").get<ReplayMetadataV2>(); 
    v.gameId = j.at("gameId").get<uint64_t>(); 
    v.status = j.at("status").get<ReplayResponseStatus>(); 
  }
} 