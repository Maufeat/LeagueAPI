#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/RecofrienderActionResource.hpp>
namespace lol {
  struct RecofrienderAccountResource { 
    std::vector<RecofrienderActionResource> contacts;
    std::string platformId;
    uint64_t accountId; 
  };
  void to_json(json& j, const RecofrienderAccountResource& v) {
  j["contacts"] = v.contacts; 
  j["platformId"] = v.platformId; 
  j["accountId"] = v.accountId; 
  }
  void from_json(const json& j, RecofrienderAccountResource& v) {
  v.contacts = j.at("contacts").get<std::vector<RecofrienderActionResource>>(); 
  v.platformId = j.at("platformId").get<std::string>(); 
  v.accountId = j.at("accountId").get<uint64_t>(); 
  }
}