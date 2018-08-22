{
float xi = 4.0;
float xf = 8.0;

TF1 *f = new TF1("f", "0.2*pow(x, 3.5)", xi, xf);
f->SetLineWidth(3);
f->GetYaxis()->SetRangeUser(0, 300);
f->Draw();

float x0 = 6.0;
float dx = 0.5;

TF1 *tangline = new TF1("tangline", "61.727142*x - 264.54489", xi, xf);
tangline->SetLineColor(kBlack);
tangline->SetLineWidth(3);
tangline->Draw("same");

TLine *vmid = new TLine(x0, 0, x0, tangline->Eval(x0));
vmid->Draw();
TLine *vleft = new TLine(x0-dx, 0, x0-dx, tangline->Eval(x0-dx));
vleft->Draw();
TLine *vright = new TLine(x0+dx, 0, x0+dx, tangline->Eval(x0+dx));
vright->Draw();

TLine *hmid = new TLine(xi, tangline->Eval(x0), x0, tangline->Eval(x0));
hmid->Draw();
TLine *hlow = new TLine(xi, tangline->Eval(x0-dx), x0-dx, tangline->Eval(x0-dx));
hlow->Draw();
TLine *hhigh = new TLine(xi, tangline->Eval(x0+dx), x0+dx, tangline->Eval(x0+dx));
hhigh->Draw();


}
