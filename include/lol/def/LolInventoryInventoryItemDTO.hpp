#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolInventoryInventoryItemDTO { 
    int32_t itemId;
    std::string inventoryType;
    std::string expirationDate;
    std::string purchaseDate;
    uint64_t quantity;
    std::string usedInGameDate;
    std::string entitlementId;
    std::string eneitlementTypeId;
    std::string instanceId;
    std::string instanceTypeId;
    bool f2p;
    bool rental;
    bool lsb;
    uint64_t wins; 
  };
  inline void to_json(json& j, const LolInventoryInventoryItemDTO& v) {
    j["itemId"] = v.itemId; 
    j["inventoryType"] = v.inventoryType; 
    j["expirationDate"] = v.expirationDate; 
    j["purchaseDate"] = v.purchaseDate; 
    j["quantity"] = v.quantity; 
    j["usedInGameDate"] = v.usedInGameDate; 
    j["entitlementId"] = v.entitlementId; 
    j["eneitlementTypeId"] = v.eneitlementTypeId; 
    j["instanceId"] = v.instanceId; 
    j["instanceTypeId"] = v.instanceTypeId; 
    j["f2p"] = v.f2p; 
    j["rental"] = v.rental; 
    j["lsb"] = v.lsb; 
    j["wins"] = v.wins; 
  }
  inline void from_json(const json& j, LolInventoryInventoryItemDTO& v) {
    v.itemId = j.at("itemId").get<int32_t>(); 
    v.inventoryType = j.at("inventoryType").get<std::string>(); 
    v.expirationDate = j.at("expirationDate").get<std::string>(); 
    v.purchaseDate = j.at("purchaseDate").get<std::string>(); 
    v.quantity = j.at("quantity").get<uint64_t>(); 
    v.usedInGameDate = j.at("usedInGameDate").get<std::string>(); 
    v.entitlementId = j.at("entitlementId").get<std::string>(); 
    v.eneitlementTypeId = j.at("eneitlementTypeId").get<std::string>(); 
    v.instanceId = j.at("instanceId").get<std::string>(); 
    v.instanceTypeId = j.at("instanceTypeId").get<std::string>(); 
    v.f2p = j.at("f2p").get<bool>(); 
    v.rental = j.at("rental").get<bool>(); 
    v.lsb = j.at("lsb").get<bool>(); 
    v.wins = j.at("wins").get<uint64_t>(); 
  }
}