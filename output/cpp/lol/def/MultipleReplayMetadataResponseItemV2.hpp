#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/ReplayResponseStatus.hpp>
#include <lol/def/ReplayMetadataV2.hpp>
namespace lol {
  struct MultipleReplayMetadataResponseItemV2 { 
    ReplayMetadataV2 metadata;
    uint64_t gameId;
    ReplayResponseStatus status; 
  };
  void to_json(json& j, const MultipleReplayMetadataResponseItemV2& v) {
  j["metadata"] = v.metadata; 
  j["gameId"] = v.gameId; 
  j["status"] = v.status; 
  }
  void from_json(const json& j, MultipleReplayMetadataResponseItemV2& v) {
  v.metadata = j.at("metadata").get<ReplayMetadataV2>(); 
  v.gameId = j.at("gameId").get<uint64_t>(); 
  v.status = j.at("status").get<ReplayResponseStatus>(); 
  }
}