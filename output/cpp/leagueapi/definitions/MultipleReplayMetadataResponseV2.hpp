#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/MultipleReplayMetadataResponseItemV2.hpp>

namespace leagueapi {
  struct MultipleReplayMetadataResponseV2 { /**/ 
    std::vector<MultipleReplayMetadataResponseItemV2> metadataResponses;/**/
  };
  static void to_json(json& j, const MultipleReplayMetadataResponseV2& v) { 
    j["metadataResponses"] = v.metadataResponses;
  }
  static void from_json(const json& j, MultipleReplayMetadataResponseV2& v) { 
    v.metadataResponses = j.at("metadataResponses").get<std::vector<MultipleReplayMetadataResponseItemV2>>(); 
  }
} 