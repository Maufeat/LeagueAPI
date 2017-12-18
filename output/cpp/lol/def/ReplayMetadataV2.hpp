#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct ReplayMetadataV2 { 
    uint32_t fileSize;
    std::string gameVersion; 
  };
  inline void to_json(json& j, const ReplayMetadataV2& v) {
    j["fileSize"] = v.fileSize; 
    j["gameVersion"] = v.gameVersion; 
  }
  inline void from_json(const json& j, ReplayMetadataV2& v) {
    v.fileSize = j.at("fileSize").get<uint32_t>(); 
    v.gameVersion = j.at("gameVersion").get<std::string>(); 
  }
}