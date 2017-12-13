#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/RecofrienderActionResource.hpp>
namespace lol {
  struct RecofrienderAccountResource { 
    std::vector<RecofrienderActionResource> contacts;
    uint64_t accountId;
    std::string platformId; 
  };
  void to_json(json& j, const RecofrienderAccountResource& v) {
  j["contacts"] = v.contacts; 
  j["accountId"] = v.accountId; 
  j["platformId"] = v.platformId; 
  }
  void from_json(const json& j, RecofrienderAccountResource& v) {
  v.contacts = j.at("contacts").get<std::vector<RecofrienderActionResource>>(); 
  v.accountId = j.at("accountId").get<uint64_t>(); 
  v.platformId = j.at("platformId").get<std::string>(); 
  }
}