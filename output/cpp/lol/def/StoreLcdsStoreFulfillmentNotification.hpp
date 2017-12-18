#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct StoreLcdsStoreFulfillmentNotification { 
    int64_t ip;
    json data;
    std::string inventoryType;
    int64_t rp; 
  };
  inline void to_json(json& j, const StoreLcdsStoreFulfillmentNotification& v) {
    j["ip"] = v.ip; 
    j["data"] = v.data; 
    j["inventoryType"] = v.inventoryType; 
    j["rp"] = v.rp; 
  }
  inline void from_json(const json& j, StoreLcdsStoreFulfillmentNotification& v) {
    v.ip = j.at("ip").get<int64_t>(); 
    v.data = j.at("data").get<json>(); 
    v.inventoryType = j.at("inventoryType").get<std::string>(); 
    v.rp = j.at("rp").get<int64_t>(); 
  }
}