#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/ReplayResponseStatus.hpp>
#include <lol/def/ReplayMetadataV2.hpp>
namespace lol {
  struct MultipleReplayMetadataResponseItemV2 { 
    ReplayResponseStatus status;
    uint64_t gameId;
    ReplayMetadataV2 metadata; 
  };
  void to_json(json& j, const MultipleReplayMetadataResponseItemV2& v) {
    j["status"] = v.status; 
    j["gameId"] = v.gameId; 
    j["metadata"] = v.metadata; 
  }
  void from_json(const json& j, MultipleReplayMetadataResponseItemV2& v) {
    v.status = j.at("status").get<ReplayResponseStatus>(); 
    v.gameId = j.at("gameId").get<uint64_t>(); 
    v.metadata = j.at("metadata").get<ReplayMetadataV2>(); 
  }
}