#pragma once
#include "../base_def.hpp" 
#include "ReplayMetadataV2.hpp"
#include "ReplayResponseStatus.hpp"
namespace lol {
  struct MultipleReplayMetadataResponseItemV2 { 
    ReplayResponseStatus status;
    uint64_t gameId;
    ReplayMetadataV2 metadata; 
  };
  inline void to_json(json& j, const MultipleReplayMetadataResponseItemV2& v) {
    j["status"] = v.status; 
    j["gameId"] = v.gameId; 
    j["metadata"] = v.metadata; 
  }
  inline void from_json(const json& j, MultipleReplayMetadataResponseItemV2& v) {
    v.status = j.at("status").get<ReplayResponseStatus>(); 
    v.gameId = j.at("gameId").get<uint64_t>(); 
    v.metadata = j.at("metadata").get<ReplayMetadataV2>(); 
  }
}