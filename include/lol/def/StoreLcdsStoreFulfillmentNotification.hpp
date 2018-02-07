#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct StoreLcdsStoreFulfillmentNotification { 
    std::string inventoryType;
    int64_t rp;
    int64_t ip;
    json data; 
  };
  inline void to_json(json& j, const StoreLcdsStoreFulfillmentNotification& v) {
    j["inventoryType"] = v.inventoryType; 
    j["rp"] = v.rp; 
    j["ip"] = v.ip; 
    j["data"] = v.data; 
  }
  inline void from_json(const json& j, StoreLcdsStoreFulfillmentNotification& v) {
    v.inventoryType = j.at("inventoryType").get<std::string>(); 
    v.rp = j.at("rp").get<int64_t>(); 
    v.ip = j.at("ip").get<int64_t>(); 
    v.data = j.at("data").get<json>(); 
  }
}