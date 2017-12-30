#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolLicenseAgreementLicenseAgreement.hpp"
namespace lol {
  template<typename T>
  inline Result<std::vector<LolLicenseAgreementLicenseAgreement>> GetLolLicenseAgreementV1Agreements(T& _client)
  {
    try {
      return ToResult<std::vector<LolLicenseAgreementLicenseAgreement>>(_client.https.request("get", "/lol-license-agreement/v1/agreements?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::vector<LolLicenseAgreementLicenseAgreement>>(e.code());
    }
  }
  template<typename T>
  inline void GetLolLicenseAgreementV1Agreements(T& _client, std::function<void(T&, const Result<std::vector<LolLicenseAgreementLicenseAgreement>>&)> cb)
  {
    _client.httpsa.request("get", "/lol-license-agreement/v1/agreements?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<std::vector<LolLicenseAgreementLicenseAgreement>>(e));
            else
              cb(_client, ToResult<std::vector<LolLicenseAgreementLicenseAgreement>>(response));
        });
  }
}