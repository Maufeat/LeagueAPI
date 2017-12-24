#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolStoreBundleItemDTO { 
    uint32_t quantity;
    int64_t ip;
    int64_t discountedRp;
    int32_t itemId;
    std::string name;
    std::string description;
    int64_t rp;
    bool owned;
    std::string iconUrl;
    std::string inventoryType; 
  };
  inline void to_json(json& j, const LolStoreBundleItemDTO& v) {
    j["quantity"] = v.quantity; 
    j["ip"] = v.ip; 
    j["discountedRp"] = v.discountedRp; 
    j["itemId"] = v.itemId; 
    j["name"] = v.name; 
    j["description"] = v.description; 
    j["rp"] = v.rp; 
    j["owned"] = v.owned; 
    j["iconUrl"] = v.iconUrl; 
    j["inventoryType"] = v.inventoryType; 
  }
  inline void from_json(const json& j, LolStoreBundleItemDTO& v) {
    v.quantity = j.at("quantity").get<uint32_t>(); 
    v.ip = j.at("ip").get<int64_t>(); 
    v.discountedRp = j.at("discountedRp").get<int64_t>(); 
    v.itemId = j.at("itemId").get<int32_t>(); 
    v.name = j.at("name").get<std::string>(); 
    v.description = j.at("description").get<std::string>(); 
    v.rp = j.at("rp").get<int64_t>(); 
    v.owned = j.at("owned").get<bool>(); 
    v.iconUrl = j.at("iconUrl").get<std::string>(); 
    v.inventoryType = j.at("inventoryType").get<std::string>(); 
  }
}