#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct RecofrienderConfig { 
    bool EnableSocial;
    std::string ContactDetailsUrlTemplate;
    std::string ContactsUrlTemplate;
    uint64_t ExternalCallTimeoutSeconds;
    std::string FaqLink;
    std::vector<std::string> EnabledNetworks; 
  };
  inline void to_json(json& j, const RecofrienderConfig& v) {
    j["EnableSocial"] = v.EnableSocial; 
    j["ContactDetailsUrlTemplate"] = v.ContactDetailsUrlTemplate; 
    j["ContactsUrlTemplate"] = v.ContactsUrlTemplate; 
    j["ExternalCallTimeoutSeconds"] = v.ExternalCallTimeoutSeconds; 
    j["FaqLink"] = v.FaqLink; 
    j["EnabledNetworks"] = v.EnabledNetworks; 
  }
  inline void from_json(const json& j, RecofrienderConfig& v) {
    v.EnableSocial = j.at("EnableSocial").get<bool>(); 
    v.ContactDetailsUrlTemplate = j.at("ContactDetailsUrlTemplate").get<std::string>(); 
    v.ContactsUrlTemplate = j.at("ContactsUrlTemplate").get<std::string>(); 
    v.ExternalCallTimeoutSeconds = j.at("ExternalCallTimeoutSeconds").get<uint64_t>(); 
    v.FaqLink = j.at("FaqLink").get<std::string>(); 
    v.EnabledNetworks = j.at("EnabledNetworks").get<std::vector<std::string>>(); 
  }
}