#pragma once
#include "../base_op.hpp" 
#include "../def/LolLicenseAgreementLicenseAgreement.hpp"
namespace lol {
  inline Result<std::vector<LolLicenseAgreementLicenseAgreement>> GetLolLicenseAgreementV1Agreements(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<std::vector<LolLicenseAgreementLicenseAgreement>> {
        _client_.request("get", "/lol-license-agreement/v1/agreements?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<LolLicenseAgreementLicenseAgreement>> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}