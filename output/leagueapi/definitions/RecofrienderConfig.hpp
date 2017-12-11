#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct RecofrienderConfig { /**/ 
    std::string ContactsUrlTemplate;/**/
    std::vector<std::string> EnabledNetworks;/**/
    bool EnableSocial;/**/
    uint64_t ExternalCallTimeoutSeconds;/**/
    std::string ContactDetailsUrlTemplate;/**/
    std::string FaqLink;/**/
  };
  static void to_json(json& j, const RecofrienderConfig& v) { 
    j["ContactsUrlTemplate"] = v.ContactsUrlTemplate;
    j["EnabledNetworks"] = v.EnabledNetworks;
    j["EnableSocial"] = v.EnableSocial;
    j["ExternalCallTimeoutSeconds"] = v.ExternalCallTimeoutSeconds;
    j["ContactDetailsUrlTemplate"] = v.ContactDetailsUrlTemplate;
    j["FaqLink"] = v.FaqLink;
  }
  static void from_json(const json& j, RecofrienderConfig& v) { 
    v.ContactsUrlTemplate = j.at("ContactsUrlTemplate").get<std::string>(); 
    v.EnabledNetworks = j.at("EnabledNetworks").get<std::vector<std::string>>(); 
    v.EnableSocial = j.at("EnableSocial").get<bool>(); 
    v.ExternalCallTimeoutSeconds = j.at("ExternalCallTimeoutSeconds").get<uint64_t>(); 
    v.ContactDetailsUrlTemplate = j.at("ContactDetailsUrlTemplate").get<std::string>(); 
    v.FaqLink = j.at("FaqLink").get<std::string>(); 
  }
} 