#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct DownloadUrlRequestV2 { 
    std::string platformId;
    uint64_t gameId; 
  };
  inline void to_json(json& j, const DownloadUrlRequestV2& v) {
    j["platformId"] = v.platformId; 
    j["gameId"] = v.gameId; 
  }
  inline void from_json(const json& j, DownloadUrlRequestV2& v) {
    v.platformId = j.at("platformId").get<std::string>(); 
    v.gameId = j.at("gameId").get<uint64_t>(); 
  }
}