#pragma once
#include "../base_def.hpp" 
#include "RecofrienderActionResource.hpp"
namespace lol {
  struct RecofrienderAccountResource { 
    std::string platformId;
    uint64_t accountId;
    std::vector<RecofrienderActionResource> contacts; 
  };
  inline void to_json(json& j, const RecofrienderAccountResource& v) {
    j["platformId"] = v.platformId; 
    j["accountId"] = v.accountId; 
    j["contacts"] = v.contacts; 
  }
  inline void from_json(const json& j, RecofrienderAccountResource& v) {
    v.platformId = j.at("platformId").get<std::string>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.contacts = j.at("contacts").get<std::vector<RecofrienderActionResource>>(); 
  }
}