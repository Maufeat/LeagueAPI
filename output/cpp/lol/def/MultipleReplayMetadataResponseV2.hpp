#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/MultipleReplayMetadataResponseItemV2.hpp>
namespace lol {
  struct MultipleReplayMetadataResponseV2 { 
    std::vector<MultipleReplayMetadataResponseItemV2> metadataResponses; 
  };
  inline void to_json(json& j, const MultipleReplayMetadataResponseV2& v) {
    j["metadataResponses"] = v.metadataResponses; 
  }
  inline void from_json(const json& j, MultipleReplayMetadataResponseV2& v) {
    v.metadataResponses = j.at("metadataResponses").get<std::vector<MultipleReplayMetadataResponseItemV2>>(); 
  }
}