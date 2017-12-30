#pragma once
#include "../base_def.hpp" 
#include "RecofrienderActionResource.hpp"
namespace lol {
  struct RecofrienderAccountResource { 
    uint64_t accountId;
    std::string platformId;
    std::vector<RecofrienderActionResource> contacts; 
  };
  inline void to_json(json& j, const RecofrienderAccountResource& v) {
    j["accountId"] = v.accountId; 
    j["platformId"] = v.platformId; 
    j["contacts"] = v.contacts; 
  }
  inline void from_json(const json& j, RecofrienderAccountResource& v) {
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.platformId = j.at("platformId").get<std::string>(); 
    v.contacts = j.at("contacts").get<std::vector<RecofrienderActionResource>>(); 
  }
}