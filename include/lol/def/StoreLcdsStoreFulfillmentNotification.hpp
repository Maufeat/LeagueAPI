#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct StoreLcdsStoreFulfillmentNotification { 
    json data;
    int64_t rp;
    int64_t ip;
    std::string inventoryType; 
  };
  inline void to_json(json& j, const StoreLcdsStoreFulfillmentNotification& v) {
    j["data"] = v.data; 
    j["rp"] = v.rp; 
    j["ip"] = v.ip; 
    j["inventoryType"] = v.inventoryType; 
  }
  inline void from_json(const json& j, StoreLcdsStoreFulfillmentNotification& v) {
    v.data = j.at("data").get<json>(); 
    v.rp = j.at("rp").get<int64_t>(); 
    v.ip = j.at("ip").get<int64_t>(); 
    v.inventoryType = j.at("inventoryType").get<std::string>(); 
  }
}