#pragma once
#include "../base_def.hpp" 
#include "ReplayMetadataV2.hpp"
#include "ReplayResponseStatus.hpp"
namespace lol {
  struct MultipleReplayMetadataResponseItemV2 { 
    uint64_t gameId;
    ReplayResponseStatus status;
    ReplayMetadataV2 metadata; 
  };
  inline void to_json(json& j, const MultipleReplayMetadataResponseItemV2& v) {
    j["gameId"] = v.gameId; 
    j["status"] = v.status; 
    j["metadata"] = v.metadata; 
  }
  inline void from_json(const json& j, MultipleReplayMetadataResponseItemV2& v) {
    v.gameId = j.at("gameId").get<uint64_t>(); 
    v.status = j.at("status").get<ReplayResponseStatus>(); 
    v.metadata = j.at("metadata").get<ReplayMetadataV2>(); 
  }
}